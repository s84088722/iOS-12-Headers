//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCClientZone, BRCDocumentItem, BRCLocalItem, BRCPQLConnection, BRCPackageItem, BRCRelativePath, BRCServerItem;

@interface BRCPathToItemLookup : NSObject
{
    BRCRelativePath *_pathOfItem;
    BRCRelativePath *_relpathOfFSEvent;
    BRCLocalItem *_matchByFileID;
    BRCDocumentItem *_matchByDocumentID;
    BRCLocalItem *_matchByPath;
    BRCServerItem *_serverByPath;
    BRCPackageItem *_packageItem;
    BRCLocalItem *_parentItem;
    BRCLocalItem *_matchByFileIDGlobally;
    BRCDocumentItem *_matchByDocumentIDGlobally;
    BRCClientZone *_clientZone;
    struct {
        unsigned int byFileID:1;
        unsigned int byDocumentID:1;
        unsigned int byPath:1;
        unsigned int parentItem:1;
        unsigned int serverItem:1;
        unsigned int serverByPath:1;
        unsigned int packageItem:1;
        unsigned int clientZone:1;
    } _fetched;
    BRCPQLConnection *_db;
}

+ (id)lookupForRelativePath:(id)arg1;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property(readonly, nonatomic) BRCRelativePath *relpathOfFSEvent; // @synthesize relpathOfFSEvent=_relpathOfFSEvent;
@property(readonly, nonatomic) BRCRelativePath *relpathOfItem; // @synthesize relpathOfItem=_pathOfItem;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_fetchClientZone;
- (_Bool)_shareIDMatchesParent:(id)arg1;
- (id)_resolveClientZoneWhileFetchingFileID:(_Bool)arg1 fetchindDocID:(_Bool)arg2;
@property(readonly, nonatomic) BRCClientZone *clientZone;
- (_Bool)_fetchByDocumentID:(_Bool)arg1;
- (_Bool)_fetchByFileID:(_Bool)arg1;
- (id)_byPathWithLastPathComponent:(id)arg1;
- (_Bool)_fetchByPath;
@property(readonly, nonatomic) BRCLocalItem *byPath;
- (id)byPathWithLastPathComponent:(id)arg1;
@property(readonly, nonatomic) BRCServerItem *serverByPath;
@property(readonly, retain) BRCDocumentItem *byDocumentIDGlobally;
@property(retain, nonatomic) BRCDocumentItem *byDocumentID;
@property(readonly, retain) BRCLocalItem *byFileIDGlobally;
@property(retain, nonatomic) BRCLocalItem *byFileID;
@property(readonly, nonatomic) BRCLocalItem *parentItem;
- (id)initWithRelativePath:(id)arg1;
- (id)initWithRelativePath:(id)arg1 db:(id)arg2;

@end

