//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (FCAdditions)
- (_Bool)fc_isOfflineErrorOfflineReason:(long long *)arg1;
- (_Bool)fc_isOfflineError;
- (_Bool)fc_isOperationThrottledError;
- (_Bool)fc_isServiceUnavailableError;
- (_Bool)fc_isCancellationError;
- (_Bool)fc_isNetworkUnavailableError;
- (_Bool)fc_shouldRetry;
@end

