//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol StreamProcessor <NSObject>
- (double)percentComplete;
- (_Bool)suspendWithError:(id *)arg1;
- (unsigned long long)resumptionOffset;
- (_Bool)finishWithError:(id *)arg1;
- (unsigned long long)diskUsage;
- (_Bool)isDataComplete;
- (_Bool)hasConsumedData;
- (_Bool)consumeData:(NSData *)arg1 error:(id *)arg2;
@end

