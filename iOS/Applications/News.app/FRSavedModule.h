//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSSavedModuleType-Protocol.h"

@class UIStoryboard;
@protocol FRFeldsparContext;

@interface FRSavedModule : NSObject <TSSavedModuleType>
{
    id <FRFeldsparContext> _feldsparContext;
    UIStoryboard *_storyboard;
}

@property(retain, nonatomic) UIStoryboard *storyboard; // @synthesize storyboard=_storyboard;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (id)createViewController;
- (id)initWithFeldsparContext:(id)arg1 storyboard:(id)arg2;

@end

