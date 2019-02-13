//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct __UniformBinding {
    int location;
    char *name;
};

struct __UniformBindings {
    struct __UniformBinding viewProjectionMatrix;
    struct __UniformBinding modelMatrix;
    struct __UniformBinding environmentMatrix;
    struct __UniformBinding cameraPosition;
    struct __UniformBinding useTexture;
    struct __UniformBinding useTextureShine;
    struct __UniformBinding useFullColorEnamel;
    struct __UniformBinding color;
    struct __UniformBinding enamelColor;
    struct __UniformBinding colorSampler;
    struct __UniformBinding environmentSampler;
    struct __UniformBinding fleckNormalSampler;
    struct __UniformBinding triColor1;
    struct __UniformBinding triColor2;
    struct __UniformBinding triColor3;
};

#pragma mark Named Unions

union _GLKMatrix4 {
    struct {
        float m00;
        float m01;
        float m02;
        float m03;
        float m10;
        float m11;
        float m12;
        float m13;
        float m20;
        float m21;
        float m22;
        float m23;
        float m30;
        float m31;
        float m32;
        float m33;
    } ;
    float m[16];
};

union _GLKVector3 {
    struct {
        float x;
        float y;
        float z;
    } ;
    struct {
        float r;
        float g;
        float b;
    } ;
    struct {
        float s;
        float t;
        float p;
    } ;
    float v[3];
};

