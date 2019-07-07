//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMetalDebugCommandEncoder.h"

#import "MTLComputeCommandEncoder.h"

@class FMetalDebugCommandBuffer, FMetalShaderPipeline, NSString;

@interface FMetalDebugComputeCommandEncoder : FMetalDebugCommandEncoder <MTLComputeCommandEncoder>
{
    id <MTLComputeCommandEncoder> Inner;	// 32 = 0x20
    FMetalDebugCommandBuffer *Buffer;	// 40 = 0x28
    FMetalShaderPipeline *Pipeline;	// 48 = 0x30
}

+ (id)alloc;	// IMP=0x00000001021df68c
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001021df670
+ (CDStruct_eb6fb79d *)classAllocator;	// IMP=0x00000001021df664
@property(retain, nonatomic) FMetalShaderPipeline *Pipeline; // @synthesize Pipeline;
@property(readonly, retain) FMetalDebugCommandBuffer *Buffer; // @synthesize Buffer;
@property(readonly, retain) id <MTLComputeCommandEncoder> Inner; // @synthesize Inner;
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x00000001021dfca8
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x00000001021dfc7c
- (id)commandEncoder;	// IMP=0x00000001021dfc78
- (void)validate;	// IMP=0x00000001021dfc74
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000001021dfc18
- (void)useHeap:(id)arg1;	// IMP=0x00000001021dfbec
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x00000001021dfbc0
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x00000001021dfb94
- (void)waitForFence:(id)arg1;	// IMP=0x00000001021dfb7c
- (void)updateFence:(id)arg1;	// IMP=0x00000001021dfb64
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x00000001021dfb20
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x00000001021dfac8
- (void)setStageInRegion:(CDStruct_4c83c94d)arg1;	// IMP=0x00000001021dfa7c
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000001021dfa64
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x00000001021dfa4c
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x00000001021dfa34
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000001021dfa1c
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000001021dfa04
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000001021df9ec
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000001021df9d4
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000001021df9bc
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000001021df9a4
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000001021df98c
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000001021df974
- (void)setComputePipelineState:(id)arg1;	// IMP=0x00000001021df95c
- (void)popDebugGroup;	// IMP=0x00000001021df914
- (void)pushDebugGroup:(id)arg1;	// IMP=0x00000001021df8bc
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x00000001021df864
- (void)endEncoding;	// IMP=0x00000001021df81c
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (void)dealloc;	// IMP=0x00000001021df750
- (id)initWithEncoder:(id)arg1 andCommandBuffer:(id)arg2;	// IMP=0x00000001021df6a8

// Remaining properties
@property(readonly) unsigned long long dispatchType;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
