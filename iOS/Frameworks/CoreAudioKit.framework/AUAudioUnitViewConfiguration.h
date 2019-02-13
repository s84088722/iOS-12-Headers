//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAudioKit/NSSecureCoding-Protocol.h>

@interface AUAudioUnitViewConfiguration : NSObject <NSSecureCoding>
{
    _Bool _hostHasController;
    double _width;
    double _height;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool hostHasController; // @synthesize hostHasController=_hostHasController;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithWidth:(double)arg1 height:(double)arg2 hostHasController:(_Bool)arg3;

@end

