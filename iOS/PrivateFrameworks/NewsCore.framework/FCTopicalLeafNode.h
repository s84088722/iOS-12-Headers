//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCTopicalNode;

@interface FCTopicalLeafNode : NSObject
{
    FCTopicalNode *_node;
    double _score;
}

@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) FCTopicalNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (id)initWithNode:(id)arg1 score:(double)arg2;

@end

