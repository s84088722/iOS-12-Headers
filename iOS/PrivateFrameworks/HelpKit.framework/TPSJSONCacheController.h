//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HelpKit/TPSDataCacheController.h>

@interface TPSJSONCacheController : TPSDataCacheController
{
}

+ (id)sharedInstance;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isURLValid:(id)arg1;
- (id)formattedDataWithData:(id)arg1;
- (id)formattedDataWithFileURL:(id)arg1;
- (id)newDataCache;
- (void)commonInit;

@end

