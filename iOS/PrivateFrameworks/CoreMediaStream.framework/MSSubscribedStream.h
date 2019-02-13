//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSSecureCoding-Protocol.h>

@class NSString;

@interface MSSubscribedStream : NSObject <NSSecureCoding>
{
    NSString *_streamID;
    NSString *_ctag;
}

+ (_Bool)supportsSecureCoding;
+ (id)subscribedStreamWithStreamID:(id)arg1;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *streamID; // @synthesize streamID=_streamID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithStreamID:(id)arg1;

@end

