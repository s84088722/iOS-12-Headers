/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:45 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSIndexPath;


@protocol MiroEditorClipCollection <NSObject>
@property (assign,nonatomic,__weak) id<MiroEditorClipCollectionDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<MiroEditorClipCollectionDelegate> delegate; 
@property (nonatomic,retain) NSIndexPath * initialIndexPath; 
@required
-(NSIndexPath *)initialIndexPath;
-(void)setInitialIndexPath:(id)arg1;
-(void)snapToIndexPath:(id)arg1 animated:(BOOL)arg2;
-(id)cellForClip:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<MiroEditorClipCollectionDelegate>)delegate;
-(id<MiroEditorClipCollectionDataSource>)dataSource;
-(void)setDataSource:(id)arg1;

@end
