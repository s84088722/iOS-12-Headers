//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NADAppSerializer, NSFileManager, NSURL;

@interface NADEntityStore : NSObject
{
    CDUnknownBlockType _identifierBlock;
    NADAppSerializer *_serializer;
    NSFileManager *_fileManager;
    NSURL *_directory;
}

@property(readonly, nonatomic) NSURL *directory; // @synthesize directory=_directory;
- (void).cxx_destruct;
- (id)directoryForEntity:(id)arg1;
- (void)_createDirectoryIfNeeded;
- (void)clearStore;
- (void)removeEntity:(id)arg1;
- (void)addEntity:(id)arg1;
- (id)allEntities;
- (id)initWithDirectory:(id)arg1 serializer:(id)arg2 identifierBlock:(CDUnknownBlockType)arg3;

@end
