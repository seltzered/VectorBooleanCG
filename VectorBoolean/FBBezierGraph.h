//
//  FBBezierGraph.h
//  VectorBoolean
//
//  Created by Andrew Finnell on 6/15/11.
//  Copyright 2011 Fortunate Bear, LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface FBBezierGraph : NSObject {
    NSMutableArray *_contours;
}

+ (id) bezierGraphWithBezierPath:(NSBezierPath *)path;
- (id) initWithBezierPath:(NSBezierPath *)path;

- (FBBezierGraph *) unionWithBezierGraph:(FBBezierGraph *)graph;
- (FBBezierGraph *) intersectWithBezierGraph:(FBBezierGraph *)graph;
- (FBBezierGraph *) differenceWithBezierGraph:(FBBezierGraph *)graph;
- (FBBezierGraph *) xorWithBezierGraph:(FBBezierGraph *)graph;

- (NSBezierPath *) bezierPath;

@end
