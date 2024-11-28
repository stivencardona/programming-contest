(ns beecrowd.1001)
(import java.io.BufferedReader)
(import java.io.InputStreamReader)

(defn soma
  []
  (let [reader (BufferedReader. (InputStreamReader. System/in))]
    (let [a (Integer/parseInt (.readLine reader))
          b (Integer/parseInt (.readLine reader))]
      (+ a b))))

(println "X =" (soma))

