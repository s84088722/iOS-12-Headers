//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPMapStateProtocol-Protocol.h"

@class RAPTransitLine;
@protocol RAPPlace;

@protocol RAPMutableMapStateProtocol <RAPMapStateProtocol>
@property(retain, nonatomic) RAPTransitLine *reportedLine;
@property(retain, nonatomic) id <RAPPlace> reportedPlace;
@end

