//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ConvolutionLayer.h"

@class NSArray;

@interface ConvolutionLayerMPS : ConvolutionLayer
{
    NSArray *_mpsConvolutions;
}

@property(retain, nonatomic) NSArray *mpsConvolutions; // @synthesize mpsConvolutions=_mpsConvolutions;
- (void).cxx_destruct;
- (id)constructWithWeights:(const float *)arg1 bias:(const float *)arg2 preluSlopes:(const float *)arg3;

@end

