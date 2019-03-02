/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:43 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableArray, _UICollectionViewGeometricIndexer;

@interface UICollectionLayoutGeometry : NSObject <NSCopying> {

	BOOL _isPrepared;
	NSArray* _groups;
	long long _preparedFrameCount;
	NSMutableArray* _groupBookmarks;
	_UICollectionViewGeometricIndexer* _groupBookmarksGeometricIndexer;
	CGSize _preparedContentSize;

}

@property (nonatomic,retain) NSArray * groups;                                                                //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic) BOOL isPrepared;                                                                 //@synthesize isPrepared=_isPrepared - In the implementation block
@property (assign,nonatomic) CGSize preparedContentSize;                                                      //@synthesize preparedContentSize=_preparedContentSize - In the implementation block
@property (assign,nonatomic) long long preparedFrameCount;                                                    //@synthesize preparedFrameCount=_preparedFrameCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupBookmarks;                                                 //@synthesize groupBookmarks=_groupBookmarks - In the implementation block
@property (nonatomic,retain) _UICollectionViewGeometricIndexer * groupBookmarksGeometricIndexer;              //@synthesize groupBookmarksGeometricIndexer=_groupBookmarksGeometricIndexer - In the implementation block
+(id)geometryWithGroupConfigurations:(id)arg1 ;
+(id)geometryWithGroups:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(id)initWithGroups:(id)arg1 ;
-(NSArray *)groups;
-(void)setPreparedFrameCount:(long long)arg1 ;
-(void)setPreparedContentSize:(CGSize)arg1 ;
-(void)setIsPrepared:(BOOL)arg1 ;
-(void)setGroupBookmarks:(NSMutableArray *)arg1 ;
-(void)setGroupBookmarksGeometricIndexer:(_UICollectionViewGeometricIndexer *)arg1 ;
-(void)_prepareWithContainerDimensions:(CGSize)arg1 layoutAxis:(int)arg2 sizeProvider:(id)arg3 consumeAllFrames:(BOOL)arg4 ;
-(NSMutableArray *)groupBookmarks;
-(_UICollectionViewGeometricIndexer *)groupBookmarksGeometricIndexer;
-(BOOL)isPrepared;
-(long long)preparedFrameCount;
-(void)prepareWithContainerDimensions:(CGSize)arg1 layoutAxis:(int)arg2 sizeProvider:(id)arg3 ;
-(id)framesIntersectingRect:(CGRect)arg1 applyingOffset:(CGPoint)arg2 ;
-(CGRect)frameForItemAtIndex:(long long)arg1 applyingOffset:(CGPoint)arg2 ;
-(void)setGroups:(NSArray *)arg1 ;
-(CGSize)preparedContentSize;
@end
