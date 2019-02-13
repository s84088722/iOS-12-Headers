//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/NSCopying-Protocol.h>
#import <ScreenReaderOutput/SCROIOElementProtocol-Protocol.h>

@class NSString;

@interface SCROIOElement : NSObject <SCROIOElementProtocol, NSCopying>
{
    unsigned int _ioObject;
    int _identifier;
}

- (int)transport;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (int)identifier;
- (unsigned int)ioObject;
- (void)dealloc;
- (id)initWithIOObject:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

