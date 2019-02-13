//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibrary, NSArray;

@interface MPModelLibraryStoreIDsImportChangeRequestOperation : MPAsyncOperation
{
    _Bool _shouldLibraryAdd;
    MPMediaLibrary *_mediaLibrary;
    NSArray *_storeIDs;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) _Bool shouldLibraryAdd; // @synthesize shouldLibraryAdd=_shouldLibraryAdd;
@property(copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void).cxx_destruct;
- (void)execute;

@end

