//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUImage-Protocol.h>

@protocol NUDevice, NUImageStorage, NUSurfaceStorage;

@protocol NUMutableImage <NUImage>
- (_Bool)copyBufferStorage:(id <NUImageStorage>)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3;
- (_Bool)copySurfaceStorage:(id <NUSurfaceStorage>)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3 device:(id <NUDevice>)arg4;
@end

