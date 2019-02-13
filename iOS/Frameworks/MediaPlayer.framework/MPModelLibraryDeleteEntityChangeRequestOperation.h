//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryDeleteEntityChangeRequest, NSOperationQueue;

@interface MPModelLibraryDeleteEntityChangeRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;
    MPModelLibraryDeleteEntityChangeRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelLibraryDeleteEntityChangeRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)_isCloudLibraryEnabled;
- (void)_deleteItems:(id)arg1 withLibrary:(id)arg2;
- (void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 mediaLibrary:(id)arg3;
- (void)execute;

@end

