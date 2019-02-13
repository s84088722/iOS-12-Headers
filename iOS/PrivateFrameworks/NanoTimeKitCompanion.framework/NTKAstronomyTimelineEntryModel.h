//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class CLLocation, NSDate;

@interface NTKAstronomyTimelineEntryModel : NTKTimelineEntryModel
{
    unsigned long long _vista;
    NSDate *_currentDate;
    CLLocation *_currentLocation;
    CLLocation *_anyLocation;
}

@property(readonly, nonatomic) CLLocation *anyLocation; // @synthesize anyLocation=_anyLocation;
@property(readonly, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(readonly, nonatomic) unsigned long long vista; // @synthesize vista=_vista;
- (void).cxx_destruct;
- (id)templateForComplicationFamily:(long long)arg1;
- (id)initWithVista:(unsigned long long)arg1 entryDate:(id)arg2 currentDate:(id)arg3 currentLocation:(id)arg4 anyLocation:(id)arg5;

@end

