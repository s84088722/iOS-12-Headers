/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FlexSongAssetProviderProtocol.h>

@class NSString;

@interface FlexSongAssetProvider_V1 : NSObject <FlexSongAssetProviderProtocol> {

	NSString* _rootFolderPath;
	NSString* _audioFileExtension;

}

@property (nonatomic,retain) NSString * rootFolderPath;                  //@synthesize rootFolderPath=_rootFolderPath - In the implementation block
@property (nonatomic,retain) NSString * audioFileExtension;              //@synthesize audioFileExtension=_audioFileExtension - In the implementation block
-(NSString *)rootFolderPath;
-(NSString *)audioFileExtension;
-(id)urlToRoot;
-(id)urlToAudioContainerForSegmentType:(unsigned long long)arg1 ;
-(id)urlToAudioForSegment:(id)arg1 ;
-(void)setAudioFileExtension:(NSString *)arg1 ;
-(id)initWithFolderPath:(id)arg1 ;
-(void)setRootFolderPath:(NSString *)arg1 ;
@end

