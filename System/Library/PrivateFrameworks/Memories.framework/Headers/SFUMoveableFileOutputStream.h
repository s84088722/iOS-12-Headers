/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUOutputStream.h>

@class NSString;

@interface SFUMoveableFileOutputStream : NSObject <SFUOutputStream> {

	int mFd;
	NSString* mPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canSeek;
-(id)inputStream;
-(id)closeLocalStream;
-(id)initWithTemporaryFile:(id)arg1 ;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(void)truncateToLength:(unsigned long long)arg1 ;
-(BOOL)moveToPath:(id)arg1 ;
-(BOOL)canCreateInputStream;
-(void)dealloc;
-(long long)offset;
-(id)path;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)flush;
@end

