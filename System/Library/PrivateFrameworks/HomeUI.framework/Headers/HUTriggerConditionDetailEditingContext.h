//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFItem, HUTriggerTimeConditionDetailEditorViewController, UINavigationController;

@interface HUTriggerConditionDetailEditingContext : NSObject
{
    HUTriggerTimeConditionDetailEditorViewController *_viewController;
    UINavigationController *_navigationController;
    HFItem *_optionItem;
}

@property(retain, nonatomic) HFItem *optionItem; // @synthesize optionItem=_optionItem;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) HUTriggerTimeConditionDetailEditorViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;

@end

