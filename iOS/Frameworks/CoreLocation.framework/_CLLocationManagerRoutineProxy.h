//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/CLLocationManagerRoutineClientInterface-Protocol.h>

@class CLLocationManagerRoutine, NSString, NSXPCConnection;
@protocol CLLocationManagerRoutineDelegate, OS_dispatch_queue;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _updating;
    _Bool _updatingPredictedApplications;
    NSXPCConnection *_connection;
    id <CLLocationManagerRoutineDelegate> _delegate;
    CLLocationManagerRoutine *_locationManagerRoutine;
}

@property(nonatomic) _Bool updatingPredictedApplications; // @synthesize updatingPredictedApplications=_updatingPredictedApplications;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) CLLocationManagerRoutine *locationManagerRoutine; // @synthesize locationManagerRoutine=_locationManagerRoutine;
@property(nonatomic) id <CLLocationManagerRoutineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)createConnection;
- (void)didUpdatePredictedApplications:(id)arg1;
- (void)didUpdateLocations:(id)arg1;
- (void)dealloc;
- (id)initWithCLLocationManagerRoutine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

