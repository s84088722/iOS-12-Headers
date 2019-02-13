//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString, SKTileGroup;

@interface SKTileSet : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_definitions;
    NSMutableArray *_groups;
    NSArray *_stamps;
    unsigned long long _type;
    struct CGSize _defaultTileSize;
    SKTileGroup *_defaultTileGroup;
    NSString *_name;
}

+ (void)clearTileSetTableCache;
+ (id)tileSetFromURL:(id)arg1;
+ (id)tileSetNamed:(id)arg1;
+ (id)findTileSetInBundleNamed:(id)arg1;
+ (id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)tileSetWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2;
+ (id)tileSetWithTileGroups:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)getCenterTileDefinitionForGroup:(id)arg1 withRequiredOutputGroupAdjacency:(unsigned long long *)arg2;
- (id)findTileDefinitionsForGroup:(id)arg1 withGroupAdjacency:(unsigned long long *)arg2;
- (id)findTileDefinitionForGroup:(id)arg1 withGroupAdjacency:(unsigned long long *)arg2;
- (void)updateTileDefinitionIDsInGroupRules;
- (void)lookForMissingDefinitionsInGroups;
- (id)initWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2;
- (id)initWithTileGroups:(id)arg1;
- (void)calcDefaultTileSize;
- (void)commonInit;
- (void)removeTileDefinitionObservers:(id)arg1;
- (void)observeTileDefinition:(id)arg1;
- (void)dealloc;
- (void)unobserveAllTileDefinitions;
- (void)observeAllTileDefinitions;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (_Bool)isEqualToNode:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *stamps;
@property(nonatomic) struct CGSize defaultTileSize;
@property(retain, nonatomic) SKTileGroup *defaultTileGroup;
@property(nonatomic) unsigned long long type;
- (void)setGroupParentPointers;
@property(copy, nonatomic) NSArray *tileGroups;
@property(readonly, nonatomic) NSArray *tileDefinitions;

@end

