//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SharedUtils/LAContextExternalizationProt-Protocol.h>

@class NSDictionary, NSError;

@protocol LAUIMechanism <LAContextExternalizationProt>
- (void)internalInfoWithReply:(void (^)(NSDictionary *))arg1;
- (void)uiFailureWithError:(NSError *)arg1;
- (void)uiSuccessWithResult:(NSDictionary *)arg1;
- (void)uiEvent:(long long)arg1 options:(NSDictionary *)arg2;
@end

