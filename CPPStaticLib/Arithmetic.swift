//
//  Arithmetic.swift
//  CPPStaticLib
//
//  Created by Lexter Labra on 1/7/20.
//  Copyright © 2020 Lexter Labra. All rights reserved.
//

import Foundation

public typealias Closure = (Double, Double) -> Double

public class Arithmetic {
    
    public static var callback: Closure?
    
    public static func Add(_ a: Double, _ b:Double) -> Double {
        return doAdd(a, b)
    }
    
    public static func Subtract(_ a: Double, _ b:Double) -> Double {
        return doSubtract(a, b)
    }
    
    public static func Multiply(_ a: Double, _ b:Double) -> Double {
        return doMultiply(a, b)
    }
    
    public static func Divide(_ a: Double, _ b:Double) -> Double {
        return doDivide(a, b)
    }
    
    public static func Custom(  _ a: Double,
                                _ b: Double
                             ) -> Double {
        return doCustom(a, b) { (x,y) -> Double in
            return Arithmetic.callback!(x,y)
        }
    }
}