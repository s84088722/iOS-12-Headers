//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IntentsUI/NSObject-Protocol.h>

@class INInteraction, NSSet;

@protocol _INUIRemoteViewControllerServing <NSObject>
- (void)queryRepresentedPropertiesWithCompletion:(void (^)(NSArray *))arg1;
- (void)viewWasCancelled;
- (void)configureForParameters:(NSSet *)arg1 ofInteraction:(INInteraction *)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(void (^)(_Bool, NSSet *, struct CGSize, NSError *))arg5;
@end

