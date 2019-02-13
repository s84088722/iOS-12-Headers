//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/NSCopying-Protocol.h>

@class NSArray, UICollectionViewLayoutAttributes;

@interface CKBallotLayoutAttributesCollection : NSObject <NSCopying>
{
    UICollectionViewLayoutAttributes *_containerAttributes;
    UICollectionViewLayoutAttributes *_voteCountAttributes;
    UICollectionViewLayoutAttributes *_ackIconAttributes;
    NSArray *_avatarAttributesCollection;
    NSArray *_nameAttributesCollection;
}

@property(retain, nonatomic) NSArray *nameAttributesCollection; // @synthesize nameAttributesCollection=_nameAttributesCollection;
@property(retain, nonatomic) NSArray *avatarAttributesCollection; // @synthesize avatarAttributesCollection=_avatarAttributesCollection;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *ackIconAttributes; // @synthesize ackIconAttributes=_ackIconAttributes;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *voteCountAttributes; // @synthesize voteCountAttributes=_voteCountAttributes;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *containerAttributes; // @synthesize containerAttributes=_containerAttributes;
- (void).cxx_destruct;
- (void)_applyAlphaToAllAttributesAlpha:(double)arg1;
- (void)_setContainerAttributes:(id)arg1 forLayoutMode:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

