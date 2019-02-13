//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface _SFTabStateData : NSObject
{
    _Bool _showingReader;
    _Bool _displayingStandaloneImage;
    _Bool _wasOpenedFromLink;
    _Bool _privateBrowsing;
    _Bool _skipUpdate;
    _Bool _skipSavingSessionState;
    int _readingListBookmarkID;
    NSString *_UUIDString;
    NSString *_title;
    NSString *_url;
    NSString *_userVisibleURL;
    long long _orderIndex;
    double _lastViewedTime;
    long long _readerViewTopScrollOffset;
    NSData *_sessionStateData;
    long long _owningBrowserWindowDatabaseID;
    NSString *_owningBrowserWindowUUIDString;
    unsigned long long _uncompressedSessionStateDataSize;
}

+ (id)uncompressedDataWithRawData:(id)arg1 uncompressedSize:(unsigned long long)arg2;
@property(nonatomic) _Bool skipSavingSessionState; // @synthesize skipSavingSessionState=_skipSavingSessionState;
@property(nonatomic) unsigned long long uncompressedSessionStateDataSize; // @synthesize uncompressedSessionStateDataSize=_uncompressedSessionStateDataSize;
@property(nonatomic) _Bool skipUpdate; // @synthesize skipUpdate=_skipUpdate;
@property(copy, nonatomic) NSString *owningBrowserWindowUUIDString; // @synthesize owningBrowserWindowUUIDString=_owningBrowserWindowUUIDString;
@property(nonatomic) long long owningBrowserWindowDatabaseID; // @synthesize owningBrowserWindowDatabaseID=_owningBrowserWindowDatabaseID;
@property(retain, nonatomic) NSData *sessionStateData; // @synthesize sessionStateData=_sessionStateData;
@property(nonatomic) _Bool privateBrowsing; // @synthesize privateBrowsing=_privateBrowsing;
@property(nonatomic) _Bool wasOpenedFromLink; // @synthesize wasOpenedFromLink=_wasOpenedFromLink;
@property(nonatomic) int readingListBookmarkID; // @synthesize readingListBookmarkID=_readingListBookmarkID;
@property(nonatomic) _Bool displayingStandaloneImage; // @synthesize displayingStandaloneImage=_displayingStandaloneImage;
@property(nonatomic) _Bool showingReader; // @synthesize showingReader=_showingReader;
@property(nonatomic) long long readerViewTopScrollOffset; // @synthesize readerViewTopScrollOffset=_readerViewTopScrollOffset;
@property(nonatomic) double lastViewedTime; // @synthesize lastViewedTime=_lastViewedTime;
@property(nonatomic) long long orderIndex; // @synthesize orderIndex=_orderIndex;
@property(retain, nonatomic) NSString *userVisibleURL; // @synthesize userVisibleURL=_userVisibleURL;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
- (void).cxx_destruct;
- (id)toDictionary;
@property(readonly, nonatomic) _Bool isSessionStateDataCompressed;
- (void)_uncompressSessionStateDataIfNeeded;
@property(readonly, nonatomic) NSData *compressedSessionStateData;
- (id)initWithSQLiteRow:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

