#line 1 "/Users/songpeng/Desktop/WXTweak/WXTweakDylib/Logos/UITweakDylib.xm"








#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WXMacro.h"

@interface FindFriendEntryViewController

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView;

@end


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class FindFriendEntryViewController; 
static NSInteger (*_logos_orig$_ungrouped$FindFriendEntryViewController$numberOfSectionsInTableView$)(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST, SEL, UITableView *); static NSInteger _logos_method$_ungrouped$FindFriendEntryViewController$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST, SEL, UITableView *); static NSInteger (*_logos_orig$_ungrouped$FindFriendEntryViewController$tableView$numberOfRowsInSection$)(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST, SEL, UITableView *, NSInteger); static NSInteger _logos_method$_ungrouped$FindFriendEntryViewController$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST, SEL, UITableView *, NSInteger); static UITableViewCell * (*_logos_orig$_ungrouped$FindFriendEntryViewController$tableView$cellForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static UITableViewCell * _logos_method$_ungrouped$FindFriendEntryViewController$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static double (*_logos_orig$_ungrouped$FindFriendEntryViewController$tableView$heightForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST, SEL, id, id); static double _logos_method$_ungrouped$FindFriendEntryViewController$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$FindFriendEntryViewController$tableView$didSelectRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static void _logos_method$_ungrouped$FindFriendEntryViewController$tableView$didSelectRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static void _logos_method$_ungrouped$FindFriendEntryViewController$sp_autoRed$(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST, SEL, UISwitch *); 

#line 19 "/Users/songpeng/Desktop/WXTweak/WXTweakDylib/Logos/UITweakDylib.xm"


static NSInteger _logos_method$_ungrouped$FindFriendEntryViewController$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView){
    return _logos_orig$_ungrouped$FindFriendEntryViewController$numberOfSectionsInTableView$(self, _cmd, tableView) + 1;
}

static NSInteger _logos_method$_ungrouped$FindFriendEntryViewController$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, NSInteger section){

    NSInteger totalSection = [self numberOfSectionsInTableView: tableView];

    if (section == totalSection - 1){
        return 2;
    }else{
        return _logos_orig$_ungrouped$FindFriendEntryViewController$tableView$numberOfRowsInSection$(self, _cmd, tableView, section);
    }
}

static UITableViewCell * _logos_method$_ungrouped$FindFriendEntryViewController$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, NSIndexPath * indexPath){
    NSInteger totalSection = [self numberOfSectionsInTableView: tableView];

    if ([indexPath section] != totalSection - 1){
        return _logos_orig$_ungrouped$FindFriendEntryViewController$tableView$cellForRowAtIndexPath$(self, _cmd, tableView, indexPath);
    }

    NSString *cellID = ([indexPath row] == 0) ? @"sp_autoCellID" : @"sp_exitWXID";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellID];
    if (cell == nil){
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellID];
        cell.backgroundColor = [UIColor whiteColor];
        cell.imageView.image = [UIImage imageNamed:@"skull.png"];
    }
    if ([indexPath row] == 0){
        
        cell.textLabel.text = @"自动抢红包";
        UISwitch *switchView = [[UISwitch alloc] init];
        switchView.on = [SP_Defaults boolForKey:SP_AutoKey];
        cell.accessoryView = switchView;
        [switchView addTarget:self action:@selector(sp_autoRed:) forControlEvents:UIControlEventValueChanged];

    }else if ([indexPath row] == 1){
        
        cell.textLabel.text = @"退出微信";
    }
    return cell;
}

static double _logos_method$_ungrouped$FindFriendEntryViewController$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id tableView, id indexPath){
    if ([indexPath section] != [self numberOfSectionsInTableView:tableView] - 1) {
        return _logos_orig$_ungrouped$FindFriendEntryViewController$tableView$heightForRowAtIndexPath$(self, _cmd, tableView, indexPath);
    }

    return 56;
}

static void _logos_method$_ungrouped$FindFriendEntryViewController$tableView$didSelectRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, NSIndexPath * indexPath){
    if ([indexPath section] != [self numberOfSectionsInTableView:tableView] - 1) {
        _logos_orig$_ungrouped$FindFriendEntryViewController$tableView$didSelectRowAtIndexPath$(self, _cmd, tableView, indexPath);
        return;
    }

    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    if ([indexPath row] == 0){
        
    }else if ([indexPath row] == 1){
        
        exit(0);
        
    }
}


static void _logos_method$_ungrouped$FindFriendEntryViewController$sp_autoRed$(_LOGOS_SELF_TYPE_NORMAL FindFriendEntryViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UISwitch * switchView){
    [SP_Defaults setBool:switchView.on forKey:SP_AutoKey];
    [SP_Defaults synchronize];
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$FindFriendEntryViewController = objc_getClass("FindFriendEntryViewController"); MSHookMessageEx(_logos_class$_ungrouped$FindFriendEntryViewController, @selector(numberOfSectionsInTableView:), (IMP)&_logos_method$_ungrouped$FindFriendEntryViewController$numberOfSectionsInTableView$, (IMP*)&_logos_orig$_ungrouped$FindFriendEntryViewController$numberOfSectionsInTableView$);MSHookMessageEx(_logos_class$_ungrouped$FindFriendEntryViewController, @selector(tableView:numberOfRowsInSection:), (IMP)&_logos_method$_ungrouped$FindFriendEntryViewController$tableView$numberOfRowsInSection$, (IMP*)&_logos_orig$_ungrouped$FindFriendEntryViewController$tableView$numberOfRowsInSection$);MSHookMessageEx(_logos_class$_ungrouped$FindFriendEntryViewController, @selector(tableView:cellForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$FindFriendEntryViewController$tableView$cellForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$FindFriendEntryViewController$tableView$cellForRowAtIndexPath$);MSHookMessageEx(_logos_class$_ungrouped$FindFriendEntryViewController, @selector(tableView:heightForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$FindFriendEntryViewController$tableView$heightForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$FindFriendEntryViewController$tableView$heightForRowAtIndexPath$);MSHookMessageEx(_logos_class$_ungrouped$FindFriendEntryViewController, @selector(tableView:didSelectRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$FindFriendEntryViewController$tableView$didSelectRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$FindFriendEntryViewController$tableView$didSelectRowAtIndexPath$);{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(UISwitch *), strlen(@encode(UISwitch *))); i += strlen(@encode(UISwitch *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$FindFriendEntryViewController, @selector(sp_autoRed:), (IMP)&_logos_method$_ungrouped$FindFriendEntryViewController$sp_autoRed$, _typeEncoding); }} }
#line 96 "/Users/songpeng/Desktop/WXTweak/WXTweakDylib/Logos/UITweakDylib.xm"
