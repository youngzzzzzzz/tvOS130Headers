/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSSet, NSArray, NSString;


@protocol PLMomentListData <PLMomentRefreshable>
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * representativeDate; 
@property (assign,nonatomic) short granularityLevel; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (assign,nonatomic) int sortIndex; 
@property (nonatomic,retain,readonly) NSSet * moments; 
@property (nonatomic,retain,readonly) NSArray * batchedMoments; 
@property (nonatomic,retain,readonly) NSString * momentListDebugDescription; 
@property (nonatomic,retain,readonly) NSString * title; 
@optional
-(NSString *)title;
-(NSString *)momentListDebugDescription;

@required
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(id)arg1;
-(void)setEndDate:(id)arg1;
-(void)delete;
-(BOOL)isDeleted;
-(NSObject*<NSCopying>)uniqueObjectID;
-(NSSet *)moments;
-(NSDate *)representativeDate;
-(void)setRepresentativeDate:(id)arg1;
-(void)addMoments:(id)arg1;
-(short)granularityLevel;
-(void)setGranularityLevel:(short)arg1;
-(int)sortIndex;
-(void)setSortIndex:(int)arg1;
-(NSArray *)batchedMoments;

@end
