//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitMathMLNode-Protocol.h>

@interface EQKitMathMLTernaryNode : EQKitMathMLNode <EQKitMathMLNode>
{
    EQKitMathMLNode *mFirst;
    EQKitMathMLNode *mSecond;
    EQKitMathMLNode *mThird;
}

- (_Bool)isBaseFontNameUsed;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (void)dealloc;
- (id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3;
- (id)init;

@end
