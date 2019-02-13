//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDrawingCommandData;

@interface ICDrawingCommand : NSObject
{
    _Bool _hidden;
    ICDrawingCommandData *_data;
    struct TopoID _timestamp;
}

@property(readonly, nonatomic) struct TopoID timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) ICDrawingCommandData *data; // @synthesize data=_data;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualDrawingCommand:(id)arg1;
- (id)initWithCommand:(id)arg1 hidden:(_Bool)arg2 timestamp:(struct TopoID)arg3;
- (unsigned int)saveToArchive:(struct Command *)arg1 sortedUUIDs:(id)arg2 withPathData:(_Bool)arg3;
- (id)initWithArchive:(const struct Command *)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;

@end

