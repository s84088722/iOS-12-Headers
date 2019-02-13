//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSArray, NSData, NSDictionary, NTPBTodayConfig;
@protocol FCContentContext, FCCoreConfiguration;

@interface FCTodayConfigConversionOperation : FCOperation
{
    NSData *_widgetConfigData;
    id <FCCoreConfiguration> _configuration;
    id <FCContentContext> _context;
    CDUnknownBlockType _todayConfigCompletionHandler;
    NTPBTodayConfig *_resultTodayConfig;
    NSArray *_networkEvents;
    NSDictionary *_resultHeldRecordsByType;
}

@property(retain, nonatomic) NSDictionary *resultHeldRecordsByType; // @synthesize resultHeldRecordsByType=_resultHeldRecordsByType;
@property(copy, nonatomic) NSArray *networkEvents; // @synthesize networkEvents=_networkEvents;
@property(copy, nonatomic) NTPBTodayConfig *resultTodayConfig; // @synthesize resultTodayConfig=_resultTodayConfig;
@property(copy, nonatomic) CDUnknownBlockType todayConfigCompletionHandler; // @synthesize todayConfigCompletionHandler=_todayConfigCompletionHandler;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSData *widgetConfigData; // @synthesize widgetConfigData=_widgetConfigData;
- (void).cxx_destruct;
- (void)_collectRecordIDsReferencedBySectionConfig:(id)arg1 withArticleListIDs:(id)arg2 articleIDs:(id)arg3;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

