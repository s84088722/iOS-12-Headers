//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPSNeuralNetwork/NSCopying-Protocol.h>

@class NSData;

@interface MPSCNNLossDataDescriptor : NSObject <NSCopying>
{
    NSData *_data;
    unsigned long long _layout;
    CDStruct_da2e99ad _size;
    unsigned long long _bytesPerRow;
    unsigned long long _bytesPerImage;
}

+ (id)cnnLossDataDescriptorWithData:(id)arg1 layout:(unsigned long long)arg2 size:(CDStruct_14f26992)arg3;
@property(nonatomic) unsigned long long bytesPerImage; // @synthesize bytesPerImage=_bytesPerImage;
@property(nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly, nonatomic) CDStruct_14f26992 size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long layout; // @synthesize layout=_layout;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

