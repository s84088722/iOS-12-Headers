//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class NSString;
@protocol BLTSectionInfoListProviderDelegate;

@protocol BLTSectionInfoListProvider <NSObject>
@property(nonatomic) __weak id <BLTSectionInfoListProviderDelegate> delegate;
- (void)reloadWithCompletion:(void (^)(NSDictionary *))arg1;

@optional
- (void)reloadSection:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
@end
