(define (mod2 x)
    (cond
        ((= 1 (% x 2)) 1)
        (else 2)
    )
)

(define (cont-frac n)
    (define (recur i)
        (if (> i n)
            0.0
            (/ 1.0 (+ (mod2 i) (recur (+ i 1))))
        )
    )
    (recur 1)
)

(define (X x) 1)

(define (mystery n)
    (+ 1 (cont-frac n))
)

(println "the value of is (^ 3 .5)")

(inspect (cont-frac 0))
(inspect (cont-frac 1))
(inspect (cont-frac 2))
(inspect (mystery 0))
(inspect (mystery 1))
(inspect (mystery 2))
(inspect (mystery 3))
(inspect (mystery 0))
(inspect (mystery 1))
(inspect (mystery 2))
(inspect (mystery 3))
(inspect (mod2 0))
(inspect (mod2 1))
(inspect (mod2 2))
(inspect (mod2 3))
(inspect (mystery 10))
(inspect (mystery 20))
(inspect (mystery 30))
