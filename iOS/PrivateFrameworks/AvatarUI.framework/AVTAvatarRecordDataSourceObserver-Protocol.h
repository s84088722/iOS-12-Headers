//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTAvatarRecordDataSource;
@protocol AVTAvatarRecord;

@protocol AVTAvatarRecordDataSourceObserver <NSObject>

@optional
- (void)significantRecordChangeInDataSource:(AVTAvatarRecordDataSource *)arg1;
- (void)dataSource:(AVTAvatarRecordDataSource *)arg1 didRemoveRecord:(id <AVTAvatarRecord>)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(AVTAvatarRecordDataSource *)arg1 didEditRecord:(id <AVTAvatarRecord>)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(AVTAvatarRecordDataSource *)arg1 didAddRecord:(id <AVTAvatarRecord>)arg2 atIndex:(unsigned long long)arg3;
@end

