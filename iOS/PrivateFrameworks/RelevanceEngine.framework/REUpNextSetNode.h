//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface REUpNextSetNode : NSObject
{
    id _item;
    REUpNextSetNode *_parent;
    NSMutableArray *_children;
    unsigned long long _rank;
}

@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(retain, nonatomic) REUpNextSetNode *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)remove;
- (void)join:(id)arg1;
- (id)rootNode;
- (id)initWithItem:(id)arg1;

@end

