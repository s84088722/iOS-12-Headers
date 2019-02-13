//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISDataProvider.h>

@class ISPropertyListProvider, SUClientInterface;

@interface SUStorePageDataProvider : ISDataProvider
{
    SUClientInterface *_clientInterface;
    long long _outputType;
    ISPropertyListProvider *_propertyListDataProvider;
}

@property(copy) ISPropertyListProvider *propertyListDataProvider; // @synthesize propertyListDataProvider=_propertyListDataProvider;
@property long long outputType; // @synthesize outputType=_outputType;
@property(retain) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void).cxx_destruct;
- (void)_loadPersonalizedStoreOffersForPage:(id)arg1;
@property(readonly) _Bool shouldProcessTouchIDDialogs;
- (_Bool)parseData:(id)arg1 returningError:(id *)arg2;

@end

