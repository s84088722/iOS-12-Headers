//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCSubscriptionController, FRStackViewController;

@interface FRFeedToolbarItemHandlerProviderFactory : NSObject
{
    FCSubscriptionController *_subscriptionController;
    FRStackViewController *_viewController;
}

@property(readonly, nonatomic) __weak FRStackViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
- (void).cxx_destruct;
- (id)createToolbarItemHandlerProviderForFeed:(id)arg1;
- (id)initWithContext:(id)arg1 stackViewController:(id)arg2;

@end

