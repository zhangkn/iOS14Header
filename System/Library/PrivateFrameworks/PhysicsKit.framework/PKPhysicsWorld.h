/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface PKPhysicsWorld : NSObject <NSSecureCoding> {

	unsigned* _world : 2World;
	unsigned _gravity : 2Vec2;
	BOOL _doSleep;
	double _accumulatedDt;
	PKContactListener* _contactListener;
	float _speed;
	NSMutableArray* _bodies;
	NSMutableArray* _joints;
	NSMutableArray* _postStepBlocks;
	PKDebugDrawPacket* drawPacket;

}

@property (assign,nonatomic) BOOL _doSleep; 
@property (nonatomic,retain) NSMutableArray * _bodies; 
@property (nonatomic,readonly) PKCAether* aether; 
@property (nonatomic,readonly) unsigned* _world : 2World; 
@property (assign,nonatomic) unsigned _gravity : 2Vec2; 
@property (assign,nonatomic) CGVector gravity; 
@property (assign,nonatomic) double speed; 
@property (assign,nonatomic) double velocityThreshold; 
@property (assign,nonatomic) id<PKPhysicsContactDelegate> contactDelegate; 
+(BOOL)supportsSecureCoding;
+(id)world;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(unsigned*)_world;
-(NSMutableArray *)_bodies;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)debugDraw:(float)arg1 matrix:(_GLSKMatrix4)arg2 showsPhysics:(BOOL)arg3 showsOutlineInterior:(BOOL)arg4 showsFields:(BOOL)arg5 ;
-(void)setSpeed:(double)arg1 ;
-(void)addBody:(id)arg1 ;
-(unsigned)_gravity;
-(void)dealloc;
-(id)joints;
-(id)collisionDelegate;
-(void)setCollisionDelegate:(id)arg1 ;
-(id)copy;
-(id<PKPhysicsContactDelegate>)contactDelegate;
-(void)addJoint:(id)arg1 ;
-(void)setContactDelegate:(id<PKPhysicsContactDelegate>)arg1 ;
-(void)enumerateBodiesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)bodies;
-(PKCAether*)aether;
-(BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3 ;
-(id)init;
-(const PKDebugDrawPacket*)debugDrawPacket;
-(id)initWithCoder:(id)arg1 ;
-(void)_runBlockOutsideOfTimeStep:(/*^block*/id)arg1 ;
-(void)removeBody:(id)arg1 ;
-(void)setGravity:(CGVector)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)speed;
-(void)addField:(id)arg1 ;
-(void)removeJoint:(id)arg1 ;
-(void)removeField:(id)arg1 ;
-(CGVector)gravity;
-(void)removeAllJoints;
-(void)removeAllBodies;
-(void)setVelocityThreshold:(double)arg1 ;
-(BOOL)hasBodies;
-(BOOL)hasFields;
-(void)enumerateBodiesAtPoint:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateBodiesAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)bodyAtPoint:(CGPoint)arg1 ;
-(id)bodyInRect:(CGRect)arg1 ;
-(id)bodyAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
-(CGVector)sampleFields:(CGPoint)arg1 ;
-(3)sampleFieldsAt:;
-(void)__init__;
-(void)removeAllFields;
-(double)velocityThreshold;
-(id)sampleFields:(CGRect)arg1 categories:(unsigned)arg2 dataSize:(CGSize)arg3 ;
-(CGVector)evalForce:(unsigned)arg1 point:(CGPoint)arg2 ;
-(BOOL)_doSleep;
-(void)set_bodies:(NSMutableArray *)arg1 ;
-(void)set_doSleep:(BOOL)arg1 ;
-(BOOL)isEqualToWorld:(id)arg1 ;
-(void)set_gravity:(unsigned)arg1 ;
@end

