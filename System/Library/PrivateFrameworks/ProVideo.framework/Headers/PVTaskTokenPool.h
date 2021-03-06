/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:52 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVTaskTokenPoolDelegate;
#import <ProVideo/ProVideo-Structs.h>
@interface PVTaskTokenPool : NSObject {

	unsigned long long _tokenCounter;
	stack<unsigned long, std::__1::deque<unsigned long, std::__1::allocator<unsigned long> > >* _tokenData;
	mutex _tokenLock;
	id<PVTaskTokenPoolDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PVTaskTokenPoolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)returnToken:(id)arg1 ;
-(id)initWithOffset:(unsigned long long)arg1 ;
-(id)getToken;
-(id)init;
-(void)setDelegate:(id<PVTaskTokenPoolDelegate>)arg1 ;
-(id<PVTaskTokenPoolDelegate>)delegate;
@end

