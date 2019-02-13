//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKAction.h>

#import <OpusKit/NSSecureCoding-Protocol.h>
#import <OpusKit/OKActionKeyPressedExports-Protocol.h>

@class NSString;

@interface OKActionKeyPressed : OKAction <OKActionKeyPressedExports, NSSecureCoding>
{
    _Bool isKeyUp;
    NSString *keyPressed;
    double timestamp;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)keyPressedActionWithKey:(id)arg1 atTime:(double)arg2 isKeyUp:(_Bool)arg3 withLocation:(struct CGPoint)arg4 context:(id)arg5;
@property(readonly, nonatomic) _Bool isKeyUp; // @synthesize isKeyUp;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSString *keyPressed; // @synthesize keyPressed;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

