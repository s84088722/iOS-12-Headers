//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSCopying-Protocol.h>

@class NSUUID;

@interface TTTodo : NSObject <NSCopying>
{
    _Bool _done;
    NSUUID *_uuid;
}

+ (id)todoWithIdentifier:(id)arg1 done:(_Bool)arg2;
@property(readonly, nonatomic) _Bool done; // @synthesize done=_done;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)todoWithDone:(_Bool)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 done:(_Bool)arg2;
- (id)serialize;
- (void)saveToArchive:(struct Todo *)arg1;
- (id)initWithArchive:(const struct Todo *)arg1;
- (id)initWithData:(id)arg1;

@end

