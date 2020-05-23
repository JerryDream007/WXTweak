
//  UITweakDylib.h
//  WXTweak
//
//  Created by 宋澎 on 2020/5/22.
//  Copyright © 2020 宋澎. All rights reserved.


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WXMacro.h"

@interface FindFriendEntryViewController

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView;

@end

%hook FindFriendEntryViewController

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return %orig + 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{

    NSInteger totalSection = [self numberOfSectionsInTableView: tableView];

    if (section == totalSection - 1){
        return 2;
    }else{
        return %orig;
    }
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    NSInteger totalSection = [self numberOfSectionsInTableView: tableView];

    if ([indexPath section] != totalSection - 1){
        return %orig;
    }

    NSString *cellID = ([indexPath row] == 0) ? @"sp_autoCellID" : @"sp_exitWXID";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellID];
    if (cell == nil){
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellID];
        cell.backgroundColor = [UIColor whiteColor];
        cell.imageView.image = [UIImage imageNamed:@"skull.png"];
    }
    if ([indexPath row] == 0){
        //抢红包
        cell.textLabel.text = @"自动抢红包";
        UISwitch *switchView = [[UISwitch alloc] init];
        switchView.on = [SP_Defaults boolForKey:SP_AutoKey];
        cell.accessoryView = switchView;
        [switchView addTarget:self action:@selector(sp_autoRed:) forControlEvents:UIControlEventValueChanged];

    }else if ([indexPath row] == 1){
        //退出微信
        cell.textLabel.text = @"退出微信";
    }
    return cell;
}

- (double)tableView:(id)tableView heightForRowAtIndexPath:(id)indexPath{
    if ([indexPath section] != [self numberOfSectionsInTableView:tableView] - 1) {
        return %orig;
    }

    return 56;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    if ([indexPath section] != [self numberOfSectionsInTableView:tableView] - 1) {
        %orig;
        return;
    }

    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    if ([indexPath row] == 0){
        //自动抢红包
    }else if ([indexPath row] == 1){
        // 终止进程
        exit(0);
        // abort();
    }
}

%new
- (void)sp_autoRed:(UISwitch *)switchView{
    [SP_Defaults setBool:switchView.on forKey:SP_AutoKey];
    [SP_Defaults synchronize];
}

%end
