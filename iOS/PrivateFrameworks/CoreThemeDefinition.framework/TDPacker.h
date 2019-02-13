//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _TDPackerNode;

@interface TDPacker : NSObject
{
    CDUnknownBlockType _sizeHandler;
    NSArray *_objectsToPack;
    _TDPackerNode *_root;
    NSArray *_packedObjects;
}

@property(retain) NSArray *packedObjects; // @synthesize packedObjects=_packedObjects;
@property(retain) _TDPackerNode *root; // @synthesize root=_root;
- (id)_growDown:(struct CGSize)arg1;
- (id)_growRight:(struct CGSize)arg1;
- (id)_growNodeToSize:(struct CGSize)arg1;
- (id)_splitNode:(id)arg1 toSize:(struct CGSize)arg2;
- (id)_findNode:(id)arg1 ofSize:(struct CGSize)arg2;
- (struct CGPoint)fitPositionOfObjectAtIndex:(long long)arg1;
- (_Bool)objectAtIndexFit:(long long)arg1;
- (struct CGSize)enclosingSize;
- (void)pack;
@property(retain, nonatomic) NSArray *objectsToPack;
- (CDUnknownBlockType)sizeHandler;
- (void)setSizeHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

