//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXScrollPosition.h>

@class NSString;

@interface SXComponentScrollPosition : SXScrollPosition
{
    NSString *_componentIdentifier;
    double _relativePageOffset;
    double _canvasWidth;
}

@property(nonatomic) double canvasWidth; // @synthesize canvasWidth=_canvasWidth;
@property(nonatomic) double relativePageOffset; // @synthesize relativePageOffset=_relativePageOffset;
@property(retain, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

