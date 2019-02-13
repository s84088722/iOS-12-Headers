//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASVSpline : NSObject
{
    struct vector<ASVControlPoint, std::__1::allocator<ASVControlPoint>> _controlPoints;
    struct vector<ASVPatchData, std::__1::allocator<ASVPatchData>> _patchData;
    struct vector<unsigned short, std::__1::allocator<unsigned short>> _indices;
    float _relativeThickness;
    float _cap_error;
}

+     // Error parsing type: 84@0:816324864f80, name: interpolateTangent:p1:p2:p3:t:
+     // Error parsing type: 84@0:816324864f80, name: interpolate:p1:p2:p3:t:
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)genTubeIndicesWithPattern:(unsigned long long)arg1;
- (void)genRightCapWithWidth:(float)arg1;
- (void)genLeftCapWithWidth:(float)arg1;
-     // Error parsing type: @104@0:8^16I24f28Q32{?=[4]}40, name: initWithPoints:numPoints:relativeThickness:pattern:mat:
@property(readonly, nonatomic) unsigned int numIndices;
@property(readonly, nonatomic) unsigned short *indices;
@property(readonly, nonatomic) unsigned int patchDataLength;
@property(readonly, nonatomic) CDStruct_183601bc *patchData;
@property(readonly, nonatomic) unsigned int numControlPoints;
@property(readonly, nonatomic) CDStruct_37a3040a *controlPoints;

@end

