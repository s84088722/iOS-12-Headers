//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CCUIContentModuleContextDelegate;

@interface CCUIContentModuleContext : NSObject
{
    NSString *_moduleIdentifier;
    id <CCUIContentModuleContextDelegate> _delegate;
}

+ (void)performWithoutAnimationWhileHidden:(CDUnknownBlockType)arg1;
+ (void)setAnimationsPermitted:(_Bool)arg1;
+ (_Bool)areAnimationsPermitted;
+ (void)initialize;
+ (id)_sharedOpenApplicationOptions;
+ (id)_sharedOpenAppService;
@property(nonatomic) __weak id <CCUIContentModuleContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *moduleIdentifier; // @synthesize moduleIdentifier=_moduleIdentifier;
- (void).cxx_destruct;
- (void)dismissControlCenter;
- (void)dismissModule;
- (void)expandedModuleDidUpdatePreferredSize;
- (void)requestExpandModule;
- (void)enqueueStatusUpdate:(id)arg1;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openApplication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithModuleIdentifier:(id)arg1;

@end

