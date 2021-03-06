/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:52 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSLock, PVVideoCompositingContext, NSString;

@interface PVRendererBase : NSObject {

	atomic<unsigned int> _frameCount;
	vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob> > >* _inFlightRenderJobs;
	NSLock* _inFlightRenderJobsLock;
	HGSynchronizable* _perfStatsLock;
	PVPerfStats* _perfStats;
	BOOL _trackStats;
	PVVideoCompositingContext* _compositingContext;
	NSString* _name;

}

@property (nonatomic,retain) PVVideoCompositingContext * compositingContext;              //@synthesize compositingContext=_compositingContext - In the implementation block
@property (nonatomic,retain) NSString * name;                                             //@synthesize name=_name - In the implementation block
+(id)getEAGLShareGroup;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(void)didRecieveMemoryWarning:(id)arg1 ;
-(void)cancelAllPendingRequests;
-(void)addRenderJobInFlight:(HGRef<PVRenderJob>*)arg1 ;
-(void)addFrameStats:(FrameStats*)arg1 ;
-(void)cleanupMemoryCaches;
-(HGRef<PVRenderJob>*)startJobForDelegate:(id)arg1 frameStats:(FrameStats*)arg2 ;
-(FrameStats*)newFrameStats;
-(void)setCompositingContext:(PVVideoCompositingContext *)arg1 ;
-(void)trackStats:(BOOL)arg1 ;
-(PVVideoCompositingContext *)compositingContext;
-(void)printAndClearStats:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithOptions:(id)arg1 ;
@end

