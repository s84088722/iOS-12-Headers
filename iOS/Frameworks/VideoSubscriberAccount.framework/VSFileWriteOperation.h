//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, VSOptional;

@interface VSFileWriteOperation : VSAsyncOperation
{
    VSOptional *_data;
    VSOptional *_destination;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VSOptional *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) VSOptional *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

@end

