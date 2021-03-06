/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSSet;


@protocol PLSyncableDetectedFace <NSObject,PFPhotosFaceRepresentation,PLSyncableObject>
@property (assign,nonatomic) double centerX; 
@property (assign,nonatomic) double centerY; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) int faceAlgorithmVersion; 
@property (nonatomic,copy) NSDate * adjustmentVersion; 
@property (nonatomic,retain) id<PLSyncablePerson> person; 
@property (nonatomic,retain) NSSet * rejectedPersons; 
@property (nonatomic,retain) id<PLSyncablePerson> personBeingKeyFace; 
@property (assign,nonatomic) long long sourceWidth; 
@property (assign,nonatomic) long long sourceHeight; 
@property (nonatomic,readonly) BOOL isTrainingFace; 
@property (assign,nonatomic) BOOL manual; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) int nameSource; 
@property (assign,nonatomic) int cloudNameSource; 
@property (assign,nonatomic) int trainingType; 
@property (assign,nonatomic) short cloudLocalState; 
@required
-(double)size;
-(void)setSize:(double)arg1;
-(void)setHidden:(BOOL)arg1;
-(BOOL)hidden;
-(long long)sourceWidth;
-(long long)sourceHeight;
-(double)centerX;
-(double)centerY;
-(id<PLSyncablePerson>)person;
-(void)setPerson:(id)arg1;
-(id)pointerDescription;
-(void)setManual:(BOOL)arg1;
-(void)setCenterX:(double)arg1;
-(void)setCenterY:(double)arg1;
-(void)setNameSource:(int)arg1;
-(int)nameSource;
-(BOOL)isTrainingFace;
-(short)cloudLocalState;
-(void)setCloudLocalState:(short)arg1;
-(id)syncDescription;
-(int)cloudNameSource;
-(void)setCloudNameSource:(int)arg1;
-(int)faceAlgorithmVersion;
-(void)setFaceAlgorithmVersion:(int)arg1;
-(NSDate *)adjustmentVersion;
-(void)setAdjustmentVersion:(id)arg1;
-(NSSet *)rejectedPersons;
-(void)setRejectedPersons:(id)arg1;
-(id<PLSyncablePerson>)personBeingKeyFace;
-(void)setPersonBeingKeyFace:(id)arg1;
-(void)setSourceWidth:(long long)arg1;
-(void)setSourceHeight:(long long)arg1;
-(BOOL)manual;
-(int)trainingType;
-(void)setTrainingType:(int)arg1;

@end

